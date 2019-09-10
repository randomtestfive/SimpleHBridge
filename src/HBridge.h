class HBridge {
private:
  int drivePin;
  int dirPin;
  bool reversed;
public:
  HBridge(int drive, int dir);
  void set(int a);
  void setReversed(bool set) { reversed = set; }
  bool isReversed() { return reversed; }
};

HBridge::HBridge(int drive, int dir) {
  drivePin = drive;
  dirPin = dir;
  pinMode(drivePin, OUTPUT);
  pinMode(dirPin, OUTPUT);
}

void HBridge::set(int val) {
  val = constrain(val * (isReversed()?-1:1), -255, 255);
  analogWrite(drivePin, (val < 0 ? 255 + val : val));
  digitalWrite(dirPin, (val < 0 ? HIGH : LOW));
}
