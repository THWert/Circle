#pragma once
class GameObject
{
public:
	/*Vector3 a;
	Vector4 b;*/

	Vector2 position; //����
	Vector2 scale; //ũ�Ⱚ
	float rotation; //ȸ����

public:
	GameObject();
	virtual ~GameObject();

	//�����Լ�
	//�ڽ��� ������ �� ���̶�� ����� �� ���
	virtual void Render();
};

