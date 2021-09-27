import telepot
token = '2032815249:AAFz8Rz1CBVPYThSZMQeTnprbMqr_HiZY3M'
mc = '1961623164'
bot = telepot.Bot(token)
def handle(msg):
    mc = msg['from']['id']
    con = msg['text']
    if con == '살아있나?':
        bot.sendMessage(mc, '살아있다')
bot.message_loop(handle)
while 1:pass
