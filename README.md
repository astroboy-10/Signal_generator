Signal Generator (Arduino-Based)

Overview
This project is a versatile Arduino-based signal generator that can produce various electrical waveforms in the time domain. It's designed for hobbyists, students, and engineers who require a straightforward and cost-effective method to generate signals for testing and experimentation.

Key Features (Planned)
- Generate common waveforms:
  - Sine wave
  - Square wave
  - Triangle wave
  - Sawtooth wave
- Adjustable parameters:
  - Frequency control
  - Amplitude modulation
  - Duty cycle adjustment (for PWM signals)
- Real-time user control via:
  - Serial monitor
  - Optional: OLED display and buttons/knobs

Hardware Components
- Arduino Uno / Nano (or compatible board)
- DAC (e.g., MCP4725) – for true analog output
- Passive components (resistors, capacitors, etc.)
- Optional components:
  - OLED display (SSD1306 or similar)
  - Potentiometers / rotary encoder
  - Push buttons/switches
  - Op-amp (for signal amplification or buffering)

Time Domain Signal Focus
All waveforms are generated in the time domain, meaning the Arduino will output voltage levels that vary over time to form wave shapes. This is ideal for:
- Oscilloscope testing
- Signal tracing in circuits
- Learning waveform behavior

Project Roadmap
- [ ] Generate square waves using digital pins
- [ ] Use PWM + filtering to approximate analog waveforms
- [ ] Integrate DAC for smooth waveform output
- [ ] Implement frequency & amplitude control via serial
- [ ] Add user interface (OLED + rotary encoder)
- [ ] Create a serial-based menu and/or display menu
- [ ] Document schematics and wiring

Use Cases
- Microcontroller testing
- Basic analog/digital electronics education
- Audio signal simulation
- Timing and delay experiments

Understanding the DAC (Digital-to-Analog Converter)

What is a DAC?
A DAC converts digital binary values (0s and 1s) into a corresponding analog voltage. Since microcontrollers like Arduino are inherently digital, they cannot produce true analog signals on their own. A DAC bridges this gap.

For example:
- Sending `0` gives 0V
- Sending `2048` (midpoint of 12-bit range) gives ~2.5V
- Sending `4095` gives 5V (assuming 5V reference)

This analog output is essential for generating smooth waveforms (sine, triangle, etc.).


Contributions
Contributions, bug reports, and feature requests are welcome! Feel free to fork this repository or open an issue.


Author: Gaurav Kumar  
Start Date: July 2025  
Project Status: In Development

