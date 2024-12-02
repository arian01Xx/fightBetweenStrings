#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution{
public:
	int isPrefixOfWord(string sentence, string searchWord){
		int word=0;
		for(int i=0; i<sentence.size(); i++){
			string t="";
			while(i<sentence.size() && sentence[i]!=' '){
				t+=sentence[i];
				i++;
			}
			word++;
			if(fact(t, searchWord)) return word;
		}
		return -1;
	}
private:
	bool fact(string t, string s){
		for(int i=0; i<s.size(); i++){
			if(s[i]!=t[i]) return false;
		}
		return true;
	}
};

int main(){
	string sentence="i love eating burger";
	string searchWord="burg";
	Solution solution;

	int output=solution.isPrefixOfWord(sentence, searchWord);
	cout<<output<<endl;
	return 0;
}
