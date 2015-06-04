import urllib.request
def download_some(url):
    response=urllib.request.urlopen(url)
    dat=response.read()
    data=str(dat)
    lines=data.split('\\n')
    f=open('farhan.txt','w')
    for line in lines:
        f.write(line+"\n")
    f.close()
x='http://real-chart.finance.yahoo.com/table.csv?s=GOOG&d=4&e=31&f=2015&g=d&a=2&b=27&c=2014&ignore=.csv'
download_some(x)