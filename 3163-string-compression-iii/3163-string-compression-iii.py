class Solution:
    def compressedString(self, word: str) -> str:
        lettersList=[]
        occurence=[]
        count=0
        previous=word[0]
        for letter in word:
            if previous==letter and count<9:
                count+=1
                previous=letter
            else:
                lettersList.append(previous)
                occurence.append(count)
                count=1
                previous=letter
        lettersList.append(previous)
        occurence.append(count)
        result=''
        for i in range(0,len(lettersList)):
            result+=str(occurence[i])+lettersList[i]
        return result