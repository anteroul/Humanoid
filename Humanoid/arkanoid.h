#pragma once

#include "raylib.h"

#define PLAYER_MAX_LIFE         5
#define LINES_OF_BRICKS         5
#define BRICKS_PER_LINE        20


typedef enum GameScreen { MENU, SETTINGS, GAMEPLAY, QUIT } GameScreen;

typedef struct Player {
    Vector2 position;
    Vector2 size;
    int life;
} Player;

typedef struct Ball {
    Vector2 position;
    Vector2 speed;
    int radius;
    bool active;
} Ball;

typedef struct Brick {
    Vector2 position;
    bool active;
} Brick;

static const int screenWidth = 800;
static const int screenHeight = 600;

static int bricks;
static int gameState;
static int level = 1;
static int score = 0;

static bool levelReady = false;
static bool gameOver = false;
static bool pause = false;

static Player player = { 0 };
static Ball ball = { 0 };
static Brick brick[LINES_OF_BRICKS][BRICKS_PER_LINE] = { 0 };
static Vector2 brickSize = { 0 };

static void StartUp(void);          // Initialize game (application)
static void InitGame(void);         // Initialize game (gameplay)
static void UpdateMenu(void);       // Update main menu
static void UpdateGame(void);       // Update gameplay
static void DrawGame(void);         // Draw graphics
static void UnloadGame(void);       // Unload game
static void UpdateDrawFrame(void);  // Update and Draw (one frame)