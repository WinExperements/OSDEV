#include<io.h>
void io_writePort(uint32_t port,int data) {
	asm("outb %b0, %w1": :"a"(data), "Nd"(port));
}
uint8_t io_readPort(uint32_t port) {
	uint8_t result;
      asm("inb %w1, %b0": "=a"(result):"Nd"(port));
	return result;
}
void io_writePortW(uint32_t port,uint16_t data) {
     asm("outw %w0, %w1": :"a"(data), "Nd"(port));
}
uint16_t io_readPortW(uint32_t port) {
	uint16_t result;
    asm("inb %w1, %b0": "=a"(result):"Nd"(port));
	return result;
}