#define SEG_DATA_DIR DDRD
#define SEG_CTRL_DIR DDRB
#define SEG_DATA     PORTD
#define SEG_CTRL     PORTB

unsigned char sev_seg[14] {0x81,0x83,0x87,0x8f,0x9f,0xbf,0xff,0xfe,0xfc,0xf8,0xf0,0xd0,0xc0,0x80};

void setup() 
{
SEG_DATA_DIR = 0xff;
SEG_CTRL_DIR = 0xff;
}

void loop() 
{
  unsigned char j;
 for(j=0;j<14;j++)
{
  //SEG_CTRL = 0x0f;
  SEG_DATA=sev_seg[j];
delay(100);
}
}
