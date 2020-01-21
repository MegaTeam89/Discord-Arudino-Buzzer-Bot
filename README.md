# Discord-Arudino-Buzzer-Bot
A simple discord python bot that lets you send a message to beep your Arduino.

You simply need two things.
1. A computer with the latest version of python installed and a Arduino IDE
2. An Arduino with a buzzer and a led.

|Modules you will need:|
| ------------- |
|discordpy      |
|pyserial       |
|asyncio        |
|time           |

You can get these by simply doing ```pip install "module-name"```

Once you that done, start setting up your arduino. Based on the code, your arduino should look like this.
![Example](/examples/Fritzing_ePP9rTABIy.png)


Once you're done setting up, plug in your arduino and open your arduino IDE of choice, open the ```buzz.ino``` file and compile and upload it.

Once you're done, run the python script ```buzzer.py``` in your Command Prompt 

If you get an error from python saying ```Python AttributeError: 'module' object has no attribute 'Serial'```
Then go into Command Prompt on your computer and type in ```pip uninstall serial``` and ```pip install serial```

Congrats, you have your very own annoying buzzer controlled by the people in your discord server.
