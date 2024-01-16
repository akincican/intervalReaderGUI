const int MAX_SENSORS = 20;

int sensorPins[MAX_SENSORS];
int numSensors;
int captureCounter=0;
bool isFirstTime=true;
int hitCounter=0;



bool buttonClicked = false;

bool isFirstClick =true;
int* tempArray;
int** dynamicMatrix;
const int button = 2;
int timeStamps[MAX_SENSORS] = {0};
const int led = 15;

void handleInterrupt1();
  void handleInterrupt2();
  void handleInterrupt3();
  void handleInterrupt4();
  void handleInterrupt5();
  void handleInterrupt6();
  void handleInterrupt7();
  void handleInterrupt8();
  void handleInterrupt9();
  void handleInterrupt10();
  void handleInterrupt11();
  void handleInterrupt12();
  void handleInterrupt13();
  void handleInterrupt14();
  void handleInterrupt15();
  void handleInterrupt16();
  void handleInterrupt17();
  void handleInterrupt18();
  void handleInterrupt19();
  void handleInterrupt20();
  
  void (*voidFunctions[])() = { handleInterrupt1, handleInterrupt2, handleInterrupt3,
                                handleInterrupt4, handleInterrupt5, handleInterrupt6,
                                handleInterrupt7, handleInterrupt8, handleInterrupt9,
                                handleInterrupt10, handleInterrupt11, handleInterrupt12,
                                handleInterrupt13, handleInterrupt14, handleInterrupt15,
                                handleInterrupt16, handleInterrupt17, handleInterrupt18,
                                handleInterrupt19, handleInterrupt20};


  void IRAM_ATTR  handleInterrupt1(){
      detachInterrupt(digitalPinToInterrupt(sensorPins[0]));
      timeStamps[0]= micros();
      captureCounter++;
    }
    void IRAM_ATTR handleInterrupt2(){
      detachInterrupt(digitalPinToInterrupt(sensorPins[1]));
      timeStamps[1]= micros();
      captureCounter++;
    }
    void IRAM_ATTR handleInterrupt3(){
      detachInterrupt(digitalPinToInterrupt(sensorPins[2]));
      timeStamps[2]= micros();
      captureCounter++;
    }
    void IRAM_ATTR  handleInterrupt4(){
      detachInterrupt(digitalPinToInterrupt(sensorPins[3]));
      timeStamps[3]= micros();
      captureCounter++;
    }
    void IRAM_ATTR  handleInterrupt5(){
      detachInterrupt(digitalPinToInterrupt(sensorPins[4]));
      timeStamps[4]= micros();
      captureCounter++;
    }
    void IRAM_ATTR  handleInterrupt6(){
      detachInterrupt(digitalPinToInterrupt(sensorPins[5]));
      timeStamps[5]= micros();
      captureCounter++;
    }
    void IRAM_ATTR  handleInterrupt7(){
      detachInterrupt(digitalPinToInterrupt(sensorPins[6]));
      timeStamps[6]= micros();
      captureCounter++;
    }
    void IRAM_ATTR  handleInterrupt8(){
      detachInterrupt(digitalPinToInterrupt(sensorPins[7]));
      timeStamps[7]= micros();
      captureCounter++;
    }
    void IRAM_ATTR  handleInterrupt9(){
      detachInterrupt(digitalPinToInterrupt(sensorPins[8]));
      timeStamps[8]= micros();
      captureCounter++;
    }
    void IRAM_ATTR  handleInterrupt10(){
      detachInterrupt(digitalPinToInterrupt(sensorPins[9]));
      timeStamps[9]= micros();
      captureCounter++;
    }

    void IRAM_ATTR  handleInterrupt11(){
      detachInterrupt(digitalPinToInterrupt(sensorPins[10]));
      timeStamps[10]= micros();
      captureCounter++;
    }
    void IRAM_ATTR handleInterrupt12(){
      detachInterrupt(digitalPinToInterrupt(sensorPins[11]));
      timeStamps[11]= micros();
      captureCounter++;
    }
    void IRAM_ATTR handleInterrupt13(){
      detachInterrupt(digitalPinToInterrupt(sensorPins[12]));
      timeStamps[12]= micros();
      captureCounter++;
    }
    void IRAM_ATTR  handleInterrupt14(){
      detachInterrupt(digitalPinToInterrupt(sensorPins[13]));
      timeStamps[13]= micros();
      captureCounter++;
    }
    void IRAM_ATTR  handleInterrupt15(){
      detachInterrupt(digitalPinToInterrupt(sensorPins[14]));
      timeStamps[14]= micros();
      captureCounter++;
    }
    void IRAM_ATTR  handleInterrupt16(){
      detachInterrupt(digitalPinToInterrupt(sensorPins[15]));
      timeStamps[15]= micros();
      captureCounter++;
    }
    void IRAM_ATTR  handleInterrupt17(){
      detachInterrupt(digitalPinToInterrupt(sensorPins[16]));
      timeStamps[16]= micros();
      captureCounter++;
    }
    void IRAM_ATTR  handleInterrupt18(){
      detachInterrupt(digitalPinToInterrupt(sensorPins[17]));
      timeStamps[17]= micros();
      captureCounter++;
    }
    void IRAM_ATTR  handleInterrupt19(){
      detachInterrupt(digitalPinToInterrupt(sensorPins[18]));
      timeStamps[18]= micros();
      captureCounter++;
    }
    void IRAM_ATTR  handleInterrupt20(){
      detachInterrupt(digitalPinToInterrupt(sensorPins[19]));
      timeStamps[19]= micros();
      captureCounter++;
  }







int findMin(const int arr[], int size) {
    if (size <= 0) {
        // Handle invalid array size
        Serial.print("invalid array size can");
        
        return 0;  // You can choose another value or throw an exception based on your requirements
  }

    int minVal = arr[0];  // Assume the first element is the smallest

    for (int i = 1; i < size; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];  // Update minVal if a smaller value is found
    }
  }

    return minVal;
}

void clearSerialMonitor() {

  
}



void subtractValueFromArray(int arr[], int size, int value) {
    for (int i = 0; i < size; ++i) {
        arr[i] -= value;
    }
}
void printArray(const int arr[], int size) {
    
    for (int i = 0; i < size; ++i) {
      
        
        Serial.print(arr[i]);
        if(!(i==size-1)){
        Serial.print(',');
    }
        
    }
    
}

void userListener(){
  clearSerialMonitor();
  Serial.print("reseted"); 
           // Prompt the user to enter the number of sensors (1 to 10)
  while (!Serial.available()) {}
  String userInput = Serial.readString();
  if(userInput.equals("reset")){
        userListener();     
    }else{
    numSensors = userInput.toInt();
    } 


    Serial.print("pin");
    while (Serial.available()) {
      Serial.read();
    }
    while (!Serial.available()) {}
      String myString = Serial.readString();
      char myChar[myString.length()+1];
      myString.toCharArray(myChar,sizeof(myChar));

      char *token = strtok(myChar, ",");
      int index = 0;
      while (token != NULL && index< numSensors){
        sensorPins[index] = atoi(token);
        token = strtok(NULL, ",");
        index++;
      }
    

    
    Serial.print("started");
}


void writeArrayToRow(int** matrix, const int arr[], int numRows, int numCols, int rowIndex) {
    for (int j = 0; j < numCols; ++j) {
        matrix[rowIndex][j] = arr[j];
    }
}

void reset(){
  
    free(dynamicMatrix);
    free(tempArray);
    userListener();
    isFirstTime = true;
    captureCounter = 0;
    hitCounter=0;
}

void restart(){
    captureCounter = 0;
    hitCounter=0;
    Serial.print("restarted");
    
}






void setup() {


  pinMode(button, INPUT);
  pinMode(led, OUTPUT);

    // Your setup code here
    Serial.begin(115200);
  
    numSensors = 4;
    sensorPins[0] = 4;
    sensorPins[1] = 5;
    sensorPins[2] = 18;
    sensorPins[3] = 19;
                          // Prompt the user to enter pin numbers for each sensor

    
   
    // Print the entered pin numbers for confirmation
    
}

void loop() {
    // Access sensor values using sensorPins[0], sensorPins[1], ..., sensorPins[numSensors - 1]
  while(isFirstTime){
    isFirstTime =false;
    tempArray = new int[numSensors];
    for(int i =0; i<numSensors; i++){
      tempArray[i]=0;
    }


  }


  if(Serial.available()){

    String userInput = Serial.readString();



    if(userInput.equals("reset")){
        reset();      
    }
    if(userInput.equals("restart")){
        restart();      
    }
    if(userInput.equals("ready")){
      if(isFirstClick){
      isFirstClick =false;
    }
     digitalWrite(led, HIGH);
 //     delay(200);
      for(int i =0 ;i< numSensors; i++){
      timeStamps[i]=0;
 //     Serial.print("pin ");
   //   Serial.print(sensorPins[i]);
   //   Serial.println(" attached");
      attachInterrupt(digitalPinToInterrupt(sensorPins[i]),voidFunctions[i] , HIGH);
      
    }
      Serial.print("wait");




      
    }
  }


  if(captureCounter==numSensors){
 //     Serial.println(captureCounter);
    captureCounter=0;
    buttonClicked=false;

    hitCounter++;
         digitalWrite(led, LOW);

    /*
    Serial.print("captureCounter");
    Serial.println(captureCounter);
    Serial.print("numSensors");
    Serial.println(numSensors);
    Serial.print("hitCounter");
    Serial.println(hitCounter);
    */
    for(int i =0;i<numSensors ; i++){
        tempArray[i]=timeStamps[i];
        timeStamps[i]=0;
    }
    int min = findMin(tempArray, numSensors);

 //   Serial.print("minVal: ");
 //   Serial.println(min);
 //   printArray(tempArray, numSensors);
    subtractValueFromArray(tempArray, numSensors, min);
    


  




    Serial.print(hitCounter);
    Serial.print(',');
    printArray(tempArray,numSensors);
        


    if(hitCounter==numSensors){
      
      while (Serial.available()) {
        Serial.read();
      }
      while (!Serial.available()) {}
      restart();
    }else{
    } 
  }


}
