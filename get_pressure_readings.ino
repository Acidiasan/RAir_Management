/* get_pressure_readings
 * 
 * Inputs:
 *    Front front
 *    Rear rear
 * Outputs:
 *    Nothing
 *  
 * Obtains all pressure readings from each airbag pressure sensor.
 */

void GetPressureReadings(Front *front, Rear *rear) {
  
  // Read voltage
  ReadSensorVoltages(front, rear);
  
  // Convert voltage to pressure
  front->left.bag.sensor.pressure   = (int)ReadPressureFromVoltage(front->left.bag.sensor.voltage);
  front->right.bag.sensor.pressure  = (int)ReadPressureFromVoltage(front->right.bag.sensor.voltage);
  rear->left.bag.sensor.pressure    = (int)ReadPressureFromVoltage(rear->left.bag.sensor.voltage);
  rear->right.bag.sensor.pressure   = (int)ReadPressureFromVoltage(rear->right.bag.sensor.voltage);

  // Print all sensor data
  PrintData(front, rear);
  
}
