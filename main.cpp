#include <stdio.h>
#include <list>

int main() {
	// 山手線を宣言
	std::list<const char*> YamanoteLine = {
	"Tokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani","Nippori","Tabata","Komagome","Sugamo","Otsuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya","Ebisu","Meguro","Gotanda","Osaki","Shinagawa","Tamachi","Hamatsucho","Shimbashi","Yurakucho"
	};

	printf("1970年\n");
	for (std::list<const char*>::iterator itr = YamanoteLine.begin(); itr != YamanoteLine.end(); itr++) {
		printf(*itr);
		if (itr != --YamanoteLine.end()) {
			printf("→");
		}
	}
	printf("\n\n");

	printf("2019年\n");
	for (std::list<const char*>::iterator itr = YamanoteLine.begin(); itr != YamanoteLine.end(); itr++) {
		if (*itr == "Tabata") {
			itr = YamanoteLine.insert(itr, "Nishi-Nippori");
			break;
		}
	}
	for (std::list<const char*>::iterator itr = YamanoteLine.begin(); itr != YamanoteLine.end(); itr++) {
		printf(*itr);
		if (itr != --YamanoteLine.end()) {
			printf("→");
		}
	}
	printf("\n\n");

	printf("2022年\n");
	for (std::list<const char*>::iterator itr = YamanoteLine.begin(); itr != YamanoteLine.end(); itr++) {
		if (*itr == "Tamachi") {
			itr = YamanoteLine.insert(itr, "Takanawa-Gateway");
			break;
		}
	}
	for (std::list<const char*>::iterator itr = YamanoteLine.begin(); itr != YamanoteLine.end(); itr++) {
		printf(*itr);
		if (itr != --YamanoteLine.end()) {
			printf("→");
		}
	}
	printf("\n");

	return 0;
}