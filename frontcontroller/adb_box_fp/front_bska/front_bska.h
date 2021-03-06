#if !defined FRONT_BSKA_H
#define FRONT_BSKA_H
extern short paramDebug;
#define TAGDEBUG "[front_bska] "

#ifndef dprintk
#define dprintk(level, x...) do \
{ \
	if ((paramDebug) && (paramDebug >= level)) printk(TAGDEBUG x); \
} while (0)
#endif

#define FPANEL_PORT2_IRQ   88

#define BUTTON_PRESSED     0x04
#define BUTTON_RELEASED    0x00

/**************/
/* For button */
/**************/
#define PIO2_BASE_ADDRESS  0x18022000
#define PIO2_IO_SIZE       0x1000
#define PIO_CLR_PnC0       0x28
#define PIO_CLR_PnC1       0x38
#define PIO_CLR_PnC2       0x48
#define PIO_SET_PnC0       0x24
#define PIO_SET_PnC1       0x34
#define PIO_SET_PnC2       0x44
#define PIO_PnMASK         0x60
#define PIO_PnCOMP         0x50

#define PIO_SET_PnCOMP     0x54
#define PIO_CLR_PnCOMP     0x58

#define PIO_PnIN           0x10

#define BUTTON_PIN         0x04 // The input pin of the button is port 5 pin 7

typedef struct
{
	unsigned int pio_addr;
	unsigned char button;
} Global_Status_t;

typedef struct
{
	struct file     *fp;
	int              read;
	struct semaphore sem;

} tFrontPanelOpen;

struct saved_data_s
{
	int length;
	char data[64];
//	int brightness;
//	int display_on;
};

extern struct saved_data_s lastdata;

#define FRONTPANEL_MINOR_RC  1
#define LASTMINOR            2
#define LED_MAJOR            147
extern tFrontPanelOpen FrontPanelOpen[LASTMINOR];

#define PIO_PORT_SIZE        0x1000
#define PIO_BASE             0xb8020000
#define STPIO_SET_OFFSET     0x04
#define STPIO_CLEAR_OFFSET   0x08
#define STPIO_POUT_OFFSET    0x00

#define STPIO_SET_PIN(PIO_ADDR, PIN, V) \
	writel(1 << PIN, PIO_ADDR + STPIO_POUT_OFFSET + ((V) ? STPIO_SET_OFFSET : STPIO_CLEAR_OFFSET))
#define PIO_PORT(n) \
	(((n) * PIO_PORT_SIZE) + PIO_BASE)

// IOCTL definitions
#define VFDDISPLAYCHARS      0xc0425a00
#define VFDBRIGHTNESS        0xc0425a03
#define VFDDISPLAYWRITEONOFF 0xc0425a05
#define VFDDRIVERINIT        0xc0425a08
#define VFDICONDISPLAYONOFF  0xc0425a0a
#define VFDSETLED            0xc0425afe
#define VFDSETMODE           0xc0425aff  // switch to vfd mode for one IOCTL

// PT6958 PIO pin definitions

#define	PORT_STB      1  // PT6958 only
#define PIN_STB       6

#define PORT_CLK      4  // shared in case of BSLA/BZZB
#define PIN_CLK       0

#define PORT_DIN      4  // shared in case of BSLA/BZZB
#define PIN_DIN       1

//#define PORT_DOUT     4  // PT6958 only
//#define PIN_DOUT      1

#define PORT_KEY_INT  2
#define PIN_KEY_INT   2

#define IO_Delay    5

#define LED_DISP_SIZE   4

struct led_ioctl_data
{
	unsigned char address;
	unsigned char data[64];
	unsigned char length;
};

/*********************************************
 *
 * Character table for PT6958 7 segment
 * LED display
 *
 * ----a----
 * |       |
 * f       b
 * |       |
 * ----g----
 * |       |
 * e       c
 * |       |
 * ----d---- h
 *
 * segment a is bit 0 -> 00000001 (0x01)
 * segment b is bit 0 -> 00000010 (0x02)
 * segment c is bit 0 -> 00000100 (0x04)
 * segment d is bit 0 -> 00001000 (0x08)
 * segment e is bit 0 -> 00010000 (0x10)
 * segment f is bit 0 -> 00100000 (0x20)
 * segment g is bit 0 -> 01000000 (0x40)
 * segment h is bit 7 -> 10000000 (0x80)
 */
static const unsigned char ROM[128] =
{
	0x00,  //0x00,
	0x00,  //0x01,
	0x00,  //0x02,
	0x00,  //0x03,
	0x00,  //0x04,
	0x00,  //0x05,
	0x00,  //0x06,
	0x00,  //0x07,
	0x00,  //0x08,
	0x00,  //0x09,
	0x00,  //0x0a,
	0x00,  //0x0b,
	0x00,  //0x0c,
	0x00,  //0x0d,
	0x00,  //0x0e,
	0x00,  //0x0f,

	0x00,  //0x10,
	0x00,  //0x11,
	0x00,  //0x12,
	0x00,  //0x13,
	0x00,  //0x14,
	0x00,  //0x15,
	0x00,  //0x16,
	0x00,  //0x17,
	0x00,  //0x18,
	0x00,  //0x19,
	0x00,  //0x1a,
	0x00,  //0x1b,
	0x00,  //0x1c,
	0x00,  //0x1d,
	0x00,  //0x1e,
	0x00,  //0x1f,

	0x00,  //0x20, <space>
	0x86,  //0x21, !
	0x22,  //0x22, "
	0x76,  //0x23, #
	0x6d,  //0x24, $
	0x52,  //0x25, %
	0x7d,  //0x26, &
	0x02,  //0x27, '
	0x39,  //0x28, (
	0x0f,  //0x29, )
	0x76,  //0x2a, *
	0x46,  //0x2b, +
	0x84,  //0x2c, ,
	0x40,  //0x2d, -
	0x80,  //0x2e, .
	0x52,  //0x2f, /

	0x3f,  //0x30, 0
	0x06,  //0x31, 1
	0x5b,  //0x32, 2
	0x4f,  //0x33, 3
	0x66,  //0x34, 4
	0x6d,  //0x35, 5
	0x7d,  //0x36, 6
	0x07,  //0x37, 7
	0x7f,  //0x38, 8
	0x6f,  //0x39, 9
	0x06,  //0x3a, :
	0x86,  //0x3b, ;
	0x58,  //0x3c, <
	0x48,  //0x3d, =
	0x4c,  //0x3e, >
	0xd3,  //0x3f, ?

	0x7b,  //0x40, @
	0x77,  //0x41, A
	0x7c,  //0x42, B
	0x39,  //0x43, C
	0x5e,  //0x44, D
	0x79,  //0x45, E
	0x71,  //0x46, F
	0x3d,  //0x47, G
	0x76,  //0x48, H
	0x06,  //0x49, I
	0x0e,  //0x4a, J
	0x74,  //0x4b, K
	0x38,  //0x4c, L
	0x37,  //0x4d, M
	0x37,  //0x4e, N
	0x3f,  //0x4f, O

	0x73,  //0x50, P
	0xbf,  //0x51, Q
	0x50,  //0x52, R
	0x6d,  //0x53, S
	0x78,  //0x54, T
	0x3e,  //0x55, U
	0x3e,  //0x56, V
	0x3e,  //0x57, W
	0x76,  //0x58, X
	0x6e,  //0x59, Y
	0x5b,  //0x5a, Z
	0x39,  //0x5b  [
	0x30,  //0x5c, |
	0x0f,  //0x5d, ]
	0x23,  //0x5e, ^
	0x08,  //0x5f, _

	0x20,  //0x60, `
	0x5f,  //0x61, a
	0x7c,  //0x62, b
	0x58,  //0x63, c
	0x5e,  //0x64, d
	0x7b,  //0x65, e
	0x71,  //0x66, f
	0x6f,  //0x67, g
	0x74,  //0x68, h
	0x04,  //0x69, i
	0x0e,  //0x6a, j
	0x74,  //0x6b, k
	0x06,  //0x6c, l
	0x54,  //0x6d, m
	0x54,  //0x6e, n
	0x5c,  //0x6f, o

	0x73,  //0x70, p
	0x67,  //0x71, q
	0x50,  //0x72, r
	0x6d,  //0x73, s
	0x78,  //0x74, t
	0x1c,  //0x75, u
	0x1c,  //0x76, v
	0x1c,  //0x77, w
	0x76,  //0x78, x
	0x6e,  //0x79, y
	0x5b,  //0x7a, z
	0x39,  //0x7b, {
	0x64,  //0x7c, backslash
	0x0f,  //0x7d, }
	0x40,  //0x7e, ~
	0x7f,  //0x7f, <DEL>--> all segments on
};

// Commands to the PT6958
#define DATA_SETCMD 0x40
// Options for DATA_SETCMD
#define TEST_MODE   0x08
#define ADDR_FIX    0x04
#define READ_KEYD   0x02 

#define ADDR_SETCMD 0xc0

#define DISP_CTLCMD 0x80
// Options for DATA_CTLCMD
#define DISPLAY_ON  0x08

#endif // FRONT_BSKA_H
// vim:ts=4
