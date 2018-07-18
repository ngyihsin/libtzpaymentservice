#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "utils/Log.h"

#define TAG_PAYMENT "payment"

#define FUNC __PRETTY_FUNCTION__

#define LOG_DEBUG(msg, ...)                                                  \
    __android_log_print(ANDROID_LOG_DEBUG, TAG_PAYMENT, "%s: " msg, FUNC, ##__VA_ARGS__);


/*
 * Called by application to create session
 * @params: void
 * return value: session_id to be used for subsequent api calls.
 *               positive values are legitimate session IDs,
 *               negative values are error
 */
int tz_payment_service_start_session ()
{
  LOG_DEBUG("Create a new session");
  return 1;
}

/*
 * Called by application to abort session during use case
 * to handle higher priority tasks.
 * @params: session_id of payment session
 * return value: 0 if success, otherwise negative error number
 */
int tz_payment_service_abort_session (int session_id)
{
  LOG_DEBUG("Abort the session with session_id");
  return 0;
}

/*
 * Called by application to close the  session after use case
 * @params: session_id of payment session
 * return value: 0 if success, otherwise negative error number
 */
int tz_payment_service_stop_session (int session_id)
{
    LOG_DEBUG("Stop the session with session_id");
    return 0;
}

/*
 * Called by application to start the usecase flow
 * @param1: session_id of payment session
 * @param2: usecase_id of action to be invoked
 * @param3: buffer to send/receive data based on usecase
 * @param4: length of buffer
 * return value: 0 if success, otherwise negative error number
 */

int tz_payment_service_invoke_usecase (int session_id, int usecase_id,
                     void *buffer, int length)
{
  LOG_DEBUG("Invoke a usecase");
  char* p = (char *)buffer;
  int i;
  for (i = 0; i < length; i++) {
    LOG_DEBUG("%c ", p[i]);
  }

  return 0;
}

/*
 *   Called by application to provision secure indicator
 * return value : 0 if success,
 * -15 SI provision file not found
 * -16 SI File not found
 * -17 unable to provision Secure indicators
 * otherwise negative error number
 */
int provision_secure_indicators(void)
{
  LOG_DEBUG("Setup provision secure UI indicators");
  return 0;
}
