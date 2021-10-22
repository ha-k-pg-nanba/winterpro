#ifndef KEYBOARD_CONTROLLER_H_
#define KEYBOARD_CONTROLLER_H_

class KeyboardController
{
public:
	struct KeyState
	{
		//�L�[���@=> �����ꂽ or ������Ă��Ȃ�
		bool IsPrevPushed;        //1�t���[���O�̃L�[���
		bool IsCurrentPushed;     //���̃t���[���̃L�[���
	};

	static const int MaxKey = 256;

public:
	KeyboardController();
	void Update();
	bool IsPushed(int key);
	bool IsHeld(int key);
	bool IsReleased(int key);

public:
	KeyState KeyStates[MaxKey];
};

#endif // !KEYBOARD_CONTROLLER_H_