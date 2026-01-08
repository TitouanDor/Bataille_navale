#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <ncurses.h>

/**
 * Represents the current window/screen displayed by the program.
 */
enum ActualWindow {
    MENU,    /**< Main menu screen. */
    GAME,    /**< Game screen. */
    OPTIONS, /**< Options screen. */
    END      /**< End screen. */
};

/**
 * Represents the current state of the game.
 */
typedef struct {
    WINDOW *window;               /**< Pointer to the main ncurses window. */
    enum ActualWindow current_window; /**< Current active window/screen. */
    int running;                  /**< Flag indicating if the application is running. */
    MEVENT mouse_event;         /**< Latest mouse event data. */
    int cursor_x;                /**< Current x position of the cursor. */
    int cursor_y;                /**< Current y position of the cursor. */
    int grid_columns;            /**< Number of columns in the game grid. */
    int grid_rows;               /**< Number of rows in the game grid. */
    int mine_pourcentage;        /**< Percentage of mines in the game grid. */
} APPstate;

#endif // GAMESTATE_H