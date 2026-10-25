# Half-Life-Hack-Club-starbie

Week 1: Starbie Starter Project
Made the starbie starter project because I don't have much experience with PCB CAD. Modified my starbie with Ultrasonic Sensor, LED, Potentiometer, and buzzer. Not sure how to implement them yet.

<img width="640" height="380" alt="Screenshot 2026-10-09 115041" src="https://github.com/user-attachments/assets/59557a29-4aab-4094-8d18-c412fd62f571" />

I decided to make this starbie because I needed an intro to pcb design during the Half life hack club. I'm really excited to do this project because I want to gain more experience with hardware and electronics. 
I started by following instructions on importing all the necessary footprints and schematics in KiCad, and then designed a schematic with sections for a screen, potentiometer, buttons and an LED.
<img width="628" height="349" alt="Screenshot 2026-10-08 192557" src="https://github.com/user-attachments/assets/6f8b7e17-37dd-42b6-b836-d63ff73b91a4" />
Next thing, I wired up the pcb outline so that all the components were connected. I had some trouble until I realized there were two layers through which I could wire the pcb. That made it a lot simpler. Its still a messy wiring, but as my first cad, its not horrible
<img width="640" height="362" alt="Screenshot 2026-10-10 133530" src="https://github.com/user-attachments/assets/c861bace-37e0-4ba6-b098-02afffa926ac" />
Next I worked on the program on Arduino IDE and modified the baseline code. I plan to iterate on this code during the build week once I have the physical copy and can see what everything is doing.
<img width="640" height="377" alt="Screenshot 2026-10-10 104459" src="https://github.com/user-attachments/assets/0ea7495f-cf82-4fdd-bbc0-ccb0d71b2c08" />
Finally, I assembled my BOM. Due to the lack of funding from starter projects and ridiculous PCB prices, I ended up only putting the PCB on the BOM and just bought everything else myself. The BOM in this repository is an accurate list of what I need funded, however below is an table of everything I have purchased

| Item | Amount | Cost (ea.) | Link |
|---|---:|---:|---|
| XIAO ESP32 C3 | 1 | $19.99 | [Amazon](https://www.amazon.com/XIAO-ESP32C3-3PCS-Pack-Bluetooth5-0/dp/B0DGX3LSC7/) |
| 0.96 OLED | 1 | $9.99 | [Amazon](https://www.amazon.com/dp/B0GBVWBWCR) |
| MPU6050 | 1 | $11.37 | [Amazon](https://www.amazon.com/hiBCTR-MPU-6050-Accelerometer-Gyroscope-Converter/dp/B0DTJY9B1D) |
| DHT11 | 1 | $9.99 | [Amazon](https://www.amazon.com/Teyleten-Robot-Temperature-Humidity-Raspberry/dp/B0CPF6ZZ73) |
| PCB | 1 | $26.49 | [JLCPCB](https://www.jlcpcb.com/) |
| **Total (each kit)** | **1** | **$77.83** | — |
