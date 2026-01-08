#ifndef LOG_H
#define LOG_H

/**
 * Types of log messages.
 */
enum LogType {
    LOG_INFO,    /**< General information. */
    LOG_WARNING, /**< Warning (abnormal behavior but non-blocking). */
    LOG_ERROR    /**< Blocking or critical error. */
};

/**
 * Initialise the logging system.
 *
 * Opens the log file and prepares the necessary resources
 * for writing messages (formats, timestamps, etc.).
 *
 * \return 0 on success, 1 on initialization error.
 */
int init_log(void);

/**
 * Writes a formatted message to the log with a certain log level.
 *
 * Uses a type from LogType to classify the message (info, warning, error)
 * and a printf-style format string with variadic arguments for the content.
 *
 * \param type    Type of message (LOG_INFO, LOG_WARNING, LOG_ERROR).
 * \param message Format of the string (like printf).
 * \param ...     Additional arguments corresponding to the format.
 * \return 0 on success, a non-zero value on write error.
 */
int write_log(int type, const char *message, ...);


#endif // LOG_H