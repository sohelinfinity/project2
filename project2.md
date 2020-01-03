from tkinter import *
def prot():
    l = len(codontable)
    s = str(codontable)
    seq=se.get()
    seq = seq.upper()
    a = len(seq)
    if a % 3 != 0:
        Label(text="DNA sequence is invalid",font=(20)).place(x=560, y=300)
    else:
        p = ""
        t = 0
        n = 0
        for g in range(1, a, 3):
            d = ""
            h = g
            t = t + 1
            for h in range(h, g + 3):
                d = d + seq[h - 1]
                if d == "ATG":
                    for i in range(t * 3, a, 3):
                        m = ""
                        j = i
                        for j in range(j, i + 3):
                            m += seq[j]
                        if s.find(m) == -1:
                            Label(text="DNA sequence is not exist", font=(20)).place(x=560, y=300)
                        p = p + "-" + codontable[m]

                    if m == "TGA" or m == "TAA" or m == "TAG":
                        n = 1
                        if n == 1:
                            e = "The Amino Acid is" + p
                            Label(text=e, font=(20)).place(x=560, y=300)
            if n == 0:
                Label(text="it is a uncomplete sequence", font=(20)).place(x=560, y=300)


codontable={
    'ATA':'I', 'ATC':'I', 'ATT':'I', 'ATG':'M',
    'ACA':'T', 'ACC':'T', 'ACG':'T', 'ACT':'T',
    'AAC':'N', 'AAT':'N', 'AAA':'K', 'AAG':'K',
    'AGC':'S', 'AGT':'S', 'AGA':'R', 'AGG':'R',
    'CTA':'L', 'CTC':'L', 'CTG':'L', 'CTT':'L',
    'CCA':'P', 'CCC':'P', 'CCG':'P', 'CCT':'P',
    'CAC':'H', 'CAT':'H', 'CAA':'Q', 'CAG':'Q',
    'CGA':'R', 'CGC':'R', 'CGG':'R', 'CGT':'R',
    'GTA':'V', 'GTC':'V', 'GTG':'V', 'GTT':'V',
    'GCA':'A', 'GCC':'A', 'GCG':'A', 'GCT':'A',
    'GAC':'D', 'GAT':'D', 'GAA':'E', 'GAG':'E',
    'GGA':'G', 'GGC':'G', 'GGG':'G', 'GGT':'G',
    'TCA':'S', 'TCC':'S', 'TCG':'S', 'TCT':'S',
    'TTC':'F', 'TTT':'F', 'TTA':'L', 'TTG':'L',
    'TAC':'Y', 'TAT':'Y', 'TAA':'', 'TAG':'',
    'TGC':'C', 'TGT':'C', 'TGA':'', 'TGG':'W',
    }
e=""
root=Tk()
f=Frame(root,bg='green',height=1500,width=1500)
f.propagate(0)
f.pack()
l1=Label(text="Enter DNA sequence",height=2,width=20,font=(35),)
l1.place(x=560,y=100)
se=Entry(f,width=25,bg='yellow',fg='green',font=('georgia',20,'underline'))
se.place(x=450,y=200)
se.bind("<Return>",prot())
b=Button(f,text='Calculate',command=prot)
b.configure(bg="blue")
b.place(x=630,y=400)
root.mainloop()
