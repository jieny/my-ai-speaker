#include <Arduino.h>

void setup()
{
    // 初始化默认串口 (USB)
    Serial.begin(115200);
    delay(2000);
    // 初始化 Serial1 (通常为 UART1)
    Serial1.begin(115200);
    delay(2000);
    // 初始化 Serial2 (通常为 UART2)
    Serial2.begin(115200);
    delay(2000);
    // 检查各个串口是否可用
    if (Serial)
    {
        Serial.println("Default Serial is available.");
        printf("Serial is available.");
    }

    if (Serial1)
    {
        Serial1.println("Serial1 is available.");
        printf("Serial1 is available.\n");
    }

    if (Serial2)
    {
        Serial2.println("Serial2 is available.");
        printf("Serial2 is available.\n");
    }
    // put your setup code here, to run once:
    // Serial1.setDebugOutput(true);
    // Serial1.print("no 没有换车换行");
    // Serial1.printf("printf test");
    // Serial1.println("with 换行");
    // Serial1.println(14, HEX);
    // Serial1.flush();

    // int dat = 15;
    // Serial2.setDebugOutput(true);
    // Serial2.print("no 没有换车换行");
    // Serial2.printf("printf test");
    // Serial2.println("with 换行");
    // Serial2.printf("the number is %d", dat);
    // Serial2.write("Hello World start");
    // Serial2.flush();
    // write your initialization code here
    ESP_LOGI("", "This is an info log message.");
    printf("Restarting now.重启？\n");
    //    fflush(stdout);
}

void loop()
{
    // put your main code here, to run repeatedly:
    // write your code here
    // 输出 "Hello World" 到串口
    Serial.print("hello arduino !");
    printf("Hello World. 哈哈 每2秒1次\n");
    printf("test123\n");
    ESP_LOGI("", "test456");
    //    fflush(stdout);
    // ei_printf("Error in initializing dma buffer with 0");
    // 延时 5000 毫秒 (5 秒)
    delay(2000);
}
