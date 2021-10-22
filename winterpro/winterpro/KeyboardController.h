#ifndef KEYBOARD_CONTROLLER_H_
#define KEYBOARD_CONTROLLER_H_

class KeyboardController
{
public:
	struct KeyState
	{
		//キー情報　=> 押された or 押されていない
		bool IsPrevPushed;        //1フレーム前のキー情報
		bool IsCurrentPushed;     //今のフレームのキー情報
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