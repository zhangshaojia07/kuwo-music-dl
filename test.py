import requests,os,sys

get_headers = { 'user-agent': 'okhttp/3.10.0' }
get_headers2 = {
    "User-Agent": "Mozilla/5.0 (Windows  NT 10.0; Win64; x64)pyh AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/33.0.0.0 Mobile Safari/537.36"
}
path = os.path.dirname(os.path.abspath(__file__))
with open(path+"\\b.txt","r") as f:
    with open(path+"\\a.txt","r") as ff:
        qwq=f.readlines()[0]
        name=ff.readlines()[0]
        print(qwq)
        music_html = requests.get(url=qwq,headers=get_headers).text
        print(music_html)
        list=music_html.split("url=")[1].split("sig=")[0]
        print(list)
        music_html2 = requests.get(url=list,headers=get_headers2).content
        if sys.getsizeof(music_html2)>=10000:
            with open(path+"\\"+name+".mp3", mode='wb') as f2:
                f2.write(music_html2)
        else :
            print("Error")
