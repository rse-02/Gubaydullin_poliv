// Определяем пин для подключения датчика влажности почвы
const int datchik = A0; // Аналоговый пин A0
int v_data = 0; // Переменная для хранения значения влажности


//насос запуск
void nasos_start(){
    digitalWrite(3, 1);  // включаем помпу [1](https://kit.alexgyver.ru/tutorials/pump/)
  }
//насос стоп
void nasos_stop (){
  digitalWrite(3, 0);
}
//измер влаж
void vlazh (){
  // Чтение значения с датчика
  v_data = analogRead(datchik);
  
  // Вывод значения в последовательный монитор
  Serial.print("Значение влажности почвы: ");
  Serial.println(v_data);
  
  // Задержка перед следующим измерением
  delay(1000); // 1 секунда
}

void nasos_test(){
  nasos_start();
  delay(1000);
  nasos_stop();
  delay(1000);

}
void setup (){
   pinMode(3, OUTPUT);  // D2 — выход [1](https://kit.alexgyver.ru/tutorials/pump/)
    int s=1;
}
void loop(){
nasos_test();
nasos_stop();
delay(2000);
//-----------------
// //Состояния
//   //Измерить
//   if (s==1){
//     Serial.println("Измеряем влажность");
//     vlazh();
//     Serial.print("Влажность ");
//     Serial.print(v_data);
//     if (v_data<100){
//        s=2;  
//     }
//   }
//   //полив
//   if (s==2){
//         Serial.println("Поливаю...");
//      nasos_start();
//       vlazh();
//        if (v_data>1000){
//           nasos_stop();
//           s=1;  
//        }
//   }
//   //Разряжен
//   if (s==3){
    
//   }
}
