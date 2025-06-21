#include "communication.h"
#include "system_definitions.h"
#include <string.h>
#include <usart.h>

static const uint32_t timeout_default = 0xFF; // Таймаут, 255 мс
static char log_file_name[] = "/sys.log";

void send_reg_log(HAL_StatusTypeDef status, char *reg)
{
	char *message = NULL;

	switch (status)
	{
	case HAL_OK:
		message = "OK";
		break;
	case HAL_ERROR:
		message = "ERROR";
		break;

	case HAL_BUSY:
		message = "BUSY";
		break;
	case HAL_TIMEOUT:
		message = "TIMEOUT";
		break;

	default:
		break;
	}

	char buffer[100];
	strcat(buffer, reg);
	strcat(buffer, ": ");
	strcat(buffer, message);
	strcat(buffer, "\n\r\0");

	send_message(buffer, PRIORITY_LOW);
}

void send_message(char *msg, Msg_Priority priority)
{
	HAL_UART_Transmit(&USB_UART_HANDLE, (uint8_t *)msg, strlen(msg), timeout_default);
}
