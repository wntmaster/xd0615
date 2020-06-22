int pinInterrupt=2;
int tick = 0; //计数值
int state=0;
//中断服务程序
void myfunc()
{
 tick = -1;
}
 
void setup()
{
  for(int i=3;i<7;i++)
    pinMode(i,OUTPUT);
  Serial.begin(9600); //初始化串口
  pinMode(13,OUTPUT);  
  attachInterrupt( digitalPinToInterrupt(pinInterrupt), myfunc, CHANGE);

}
 
void loop()
{
    for(tick=0;tick<10;tick++)
    {
      int a=tick;
      digitalWrite(3,a&0x1);
      digitalWrite(4,(a>>1)&0x1);
      digitalWrite(5,(a>>2)&0x1);
      digitalWrite(6,(a>>3)&0x1);
      delay(1000);
    }
}
