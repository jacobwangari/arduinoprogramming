import serial

arduinoData = serial.Serial('com3', 9600)

while True:
    cmd = input("Write your command")
    cmd = cmd + '\r'
    arduinoData.write(cmd.encode())