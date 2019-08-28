# ADC_Dual_Slope_Conversion-

1.1 Objective:
----------------
- To read the timer value when capacitor discharging, the discharging time period is equal to the timer value that needed to read.
- Adjusting Vin value (0 - 5V) by potential meter to get different timer value.

1.2 Circuit Diagram:
----------------------
![circuit](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/b0c93766a30c6b769bad6885b2c8d8fc/image.png )


1.3 Software Configuration:
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

1.3 Coding:
 -------------
- Code detail, [click here](https://github.com/TWQ1765/ADC_Dual_Slope_Conversion-/blob/master/Src/main.c)

1.4 Result:
------------
- When Vin = 1.28 V:

 ![wave1](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/6167d4eb94f19ed1e073e9a21ba9eabb/image.png)

 ![wave2](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/636e81167e7e5fde19149f295f4b3b04/image.png)

 ![console](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/d5ead078ae39ec2e9076144e65beb433/image.png)

- When Vin = 2 V:

 ![wave1](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/6c4c5db1fa15ed7fbc6dce73701da6c3/image.png)

 ![wave2](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/f35d5748eb319cb7e3c76f76573cd668/image.png)

 ![console](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/77277a23187c7c9a03c18992566a811a/image.png)

- When Vin = 3 V:

 ![wave1](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/f9997fd33c2eeb80c7982fac0db992e1/image.png)

 ![wave2](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/d5eeed6ec47a302f1da12845d3acc2a3/image.png)

 ![console](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/c4cc4812a40b3f5b3223954d0fc2b334/image.png)

-  When Vin = 4.3 V (maximum voltage):

 ![wave1](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/53f929eb94369e6391a9b36dfe708a02/image.png)

 ![wave2](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/c845bae5606c08dc5dfbb3e60cc223e7/image.png)

 ![console](https://trello-attachments.s3.amazonaws.com/5cee4774d8fcdd32c2d51358/5d553ea56cb12a2d7b1a3c06/ed6d3d862f9df2f3d12e1c6ff063da0a/image.png)

1.5 Summary:
----------------
1. Base on the observation the result show correctly with the comparison between timer value from the console and the result on oscilloscope. However the result error getting bigger when the Vin voltage is increasing.
2. They are other serious problem facing when the Vin voltage closer to 0V. The system will not able to function even though Vin value turn high to 5V. This is because the feedback signal is no longer toggle which mean the MCU will not detect raising edge any more. But this can be solve by manually press reset button from the MCU board.
3. To solve the problem (2.) above the timer 2 was set as auto reset the hardware when reaching over the maximum timer value due to the maximum voltage input.
