# ADC_Dual_Slope_Conversion-

1.1 Objective:
----------------
- To read the timer value when capacitor discharging, the discharging time period is equal to the timer value that needed to read.
- Adjusting Vin value (0 - 5V) by potential meter to get different timer value.

1.2 Circuit Diagram:
----------------------
![circuit](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/b0c93766a30c6b769bad6885b2c8d8fc/image.png )
![circuit](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/7934bf5f99627e4cb6a64569ecb9de5d/image.png )

1.3 Theory:
--------------
Dual Slope ADC Calculation and defining integrator circuit:

- general circuit diagram:
![circuit diagram](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5cef9fd7a8c02d75df38225e/d5d0e55ced4b5b29260efffec3f8445c/image.png)
                                               
- Defining integrator circuit:

![circuit diagram](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5cef9fd7a8c02d75df38225e/6be594e7d17f74f358c250b45c4ca3e4/image.png)

**type error: Ix = If'

![cal1](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5cef9fd7a8c02d75df38225e/ee3cb2c6396265e5796156f112047849/image.png)
![cal2](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5cef9fd7a8c02d75df38225e/fff0da76b3fd7373ba4452635f1ca4c1/image.png)
![cal3](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5cef9fd7a8c02d75df38225e/91922948db02eb85d107849c3fdb9fe4/image.png)
![cal4](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5cef9fd7a8c02d75df38225e/e3fcbb56df8c4f4b15f5fbe3dd37642f/image.png)
when current f (If) = current in (Iin):
C2 = C:
![cal5](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5cef9fd7a8c02d75df38225e/b11d033077b120d6edc68c0dcda119ba/image.png)
![cal6](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5cef9fd7a8c02d75df38225e/accfe6390c3c1e8de3091a14a8b7c75b/image.png)
![cal7](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5cef9fd7a8c02d75df38225e/54158b7a3430a6d81b3ba93245825355/image.png)
![cal8](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5cef9fd7a8c02d75df38225e/cf7d64d901990deca12c5f538be8adc3/image.png)

The circuit is combination of switcher, integrator, comparator and a counter.
In my design, the counter work will replaced and performed by a STM32-cotexM3 micro-controller then the switcher will be using 74HC4053D (multiplexer/demux ic) to switching between Vref (-1V) and Vin, comparator model is LM311 and op amp 741 as integrator.


- Calculation:

<img src="https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5cef9fd7a8c02d75df38225e/c4cf97937edd9a23894e1ee3549e23ec/20190620_111825.jpg" width="300"><img src="https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5cef9fd7a8c02d75df38225e/fdaab32da86623ce6495ac0091b92772/20190620_111838.jpg" width="300">
- example calculation:
 <img src="https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5cef9fd7a8c02d75df38225e/969126cb86a27817d9a6786f3d30d5bf/20190620_111843.jpg" width="300">
 
 
1.4 Software Configuration:
-------------------------------
- CubeMx config:
![mx](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/e6d077a33d5fde5004bbdd4dfa508575/image.png)
![mx2](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/4f9d1413cb51fd14da1f56b883cf27f0/image.png)

- GPIO configuration:
 - Timer 1 [PWM generation]:
![PWM](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/618d076021e956e5afb71c884b1adc8d/image.png)

 - Timer 2 [input capture capacitor discharge time]:
![ic](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/c41709c129fafa105d939433ce711294/image.png)

- Timer 3 [one pulse mode generate] :
![one ](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/f76e520ea8a6fc475c53f26e7d695171/image.png)

- USART1 [Serial transfer between PC and MCU for console display]:
 ![gpio](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d4baec290c24339d8f0fe49/2f729fd88430a19d12bff5ef69c0af46/image.png)
 
- I2C1 (optional) [for OLED or LCD display purpose]:
![i2c](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d4baec290c24339d8f0fe49/a125e7c3944db78e1c344959a1a0c9f2/image.png)

- GPIO(PA10 & PA11)Configuration
![gpio](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/ff5b09bbbf4f43253c890a0fa4b84d4c/image.png)

- **Download the Power point file to be see more clearly**, [DualSlopeADC.pptx](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/7f8f0ecd12436f557cbc9e334c5140bd/DualSlopeADC.pptx) 

1.5 Coding:
 -------------
- Code detail, [click here](https://github.com/TWQ1765/ADC_Dual_Slope_Conversion-/blob/master/Src/main.c)

1.6 Result:
------------
- When Vin = 1.28 V:

<img src="https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/6167d4eb94f19ed1e073e9a21ba9eabb/image.png" width="400">

<img src="https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/636e81167e7e5fde19149f295f4b3b04/image.png" width="400">

<img src="https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/d5ead078ae39ec2e9076144e65beb433/image.png" width="300">

- When Vin = 2 V:

<img src="https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/6c4c5db1fa15ed7fbc6dce73701da6c3/image.png" width="500">

<img src="https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/f35d5748eb319cb7e3c76f76573cd668/image.png" width="500">

<img src="https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/77277a23187c7c9a03c18992566a811a/image.png" width="300">

- When Vin = 3 V:

<img src="https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/f9997fd33c2eeb80c7982fac0db992e1/image.png" width="500">

<img src="https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/d5eeed6ec47a302f1da12845d3acc2a3/image.png" width="500">

<img src="https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/c4cc4812a40b3f5b3223954d0fc2b334/image.png" width="300">

-  When Vin = 4.3 V (maximum voltage):

 <img src="https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/53f929eb94369e6391a9b36dfe708a02/image.png" width="500">
 
<img src="https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/c845bae5606c08dc5dfbb3e60cc223e7/image.png" width="500">

<img src="https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/c845bae5606c08dc5dfbb3e60cc223e7/image.png" width="500">

<img src="https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/ed6d3d862f9df2f3d12e1c6ff063da0a/image.png" width="300">

1.7 Summary:
----------------
1. Base on the observation the result show correctly with the comparison between timer value from the console and the result on oscilloscope. However the result error getting bigger when the Vin voltage is increasing.
2. They are other serious problem facing when the Vin voltage closer to 0V. The system will not able to function even though Vin value turn high to 5V. This is because the feedback signal is no longer toggle which mean the MCU will not detect raising edge any more. But this can be solve by manually press reset button from the MCU board.
3. To solve the problem (2.) above the timer 2 was set as auto reset the hardware when reaching over the maximum timer value due to the maximum voltage input.
