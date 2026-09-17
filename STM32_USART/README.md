
 STM32 UART Echo (Polling RX / DMA TX)

A minimal STM32 application that reads serial text characters via polling, stores them into a safe buffer, and echoes them back using efficient **Direct Memory Access (DMA)**.

---

Features
*Polling RX:** Reads data byte-by-byte using `HAL_UART_Receive`.
*Buffer Protection:** Automatically stops at 99 characters or when **Enter** (`\r`) is pressed.
*DMA TX:** Asynchronously sends the text back using `HAL_UART_Transmit_DMA` to save CPU cycles.



 Hardware Setup
*Peripheral:** USART2
*Baud Rate:** 115200 (8N1)
*DMA Channel:** DMA1 Channel 7 (mapped to USART2_TX)
*Clock Source:** HSI with PLL configuration



 How It Works
1. The MCU waits for characters from your serial terminal.
2. Pressing **Enter** stops the capture and null-terminates the string.
3. The MCU prefixes the string with `"Received : "`, triggers a background DMA transmit, delays for 1 second, and repeats.

How to Run
1. Open and compile this project inside **STM32CubeIDE**.
2. Flash the binary to your development board via **ST-LINK**.
3. Open a serial terminal tool (e.g., Putty, Tera Term) at **115200 baud**.
4. Type a message, hit **Enter**, and watch the MCU echo it back.

Output Verification
The execution and output of this application were successfully verified using the **PuTTY CLI** serial terminal emulator, confirming stable character handling and correct string loopback processing over the COM connection.
