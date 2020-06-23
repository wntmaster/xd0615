
int sensorValue = 0;//定义一个变量

void setup()
{
  pinMode(A0, INPUT);//讲A0管脚设置为输出
  Serial.begin(9600);//初始化串口

}

void loop()
{
  sensorValue = analogRead(A0);//将A0管脚接受的电压的值赋给变量
  Serial.println(sensorValue);//输出sensorValue的值
  delay(10); //延迟10毫秒
}