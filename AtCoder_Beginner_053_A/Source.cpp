/*
��蕶
���߂�����͌��݂̃��[�g�� 1200 �����Ȃ�� AtCoder Beginner Contest (ABC) �ɁA�����łȂ���� AtCoder Regular Contest (ARC) �ɎQ�����邱�Ƃɂ��܂����B ���߂�����̌��݂̃��[�g x ���^�����܂��B���߂����񂪎Q������R���e�X�g�� ABC �Ȃ�� ABC �ƁA�����łȂ���� ARC �Əo�͂��Ă��������B
*/

#include<iostream>
#include<string>
int main() {
	int rate;
	std::string result;
	std::cin >> rate;

	rate < 1200 ? result = "ABC" : result = "ARC";
	std::cout << result << std::endl;

	return 0;
}