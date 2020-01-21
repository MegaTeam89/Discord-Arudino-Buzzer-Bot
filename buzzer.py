#Made by MegaTeam or TeamMega. 2019-2020

import discord
from discord.ext import commands
from discord.ext.commands import Bot
import serial
import asyncio
import time

bot = commands.Bot(command_prefix="^")
bot.remove_command("help") #discord.py defaults to having this on
channelid = 564117511532969990
arduinoData = serial.Serial('COM7',9600) #Change COM7 to the port of your arduino

print("Ready to go!") #Letting you know it's working
print(f"Using (discord.version_info) Version.") #list version

#-----------------------Command---------------------------------------------
@bot.command()
async def beep(ctx): #If you're getting a access denied error in the python console, it is most likely that your arduino IDE of choice is currently using it. Make sure to close out of it!
        await ctx.channel.send("Sending beep to Owner")
        arduinoData.write('1'.encode())
        time.sleep(1)
        arduinoData.write('2'.encode())
        await ctx.channel.send("Send Successful")


        

bot.run("token") #replace with yur bot token
