//
// Created by XSZheng on 2015/9/22.
//

#ifndef ACTIONDESIGNMODEL_CONTEXT_H
#define ACTIONDESIGNMODEL_CONTEXT_H


class Strategy;

/**
*������� Strategy ģʽ�Ĺؼ���Ҳ�� Strategy ģʽ�� Template ģʽ�ĸ���
�������ڡ�
*Strategy ͨ������ϡ���ί�У� ��ʽʵ���㷨��ʵ�֣� ���칹���� Template ģ
ʽ���ȡ���Ǽ̳еķ�ʽ
*������ģʽ������Ҳ�Ǽ̳к��������ʵ�ֽӿ����õķ�ʽ������
*/
class Context {
public:
    Context(Strategy *stg);

    ~Context();

    void DoAction();

protected:
private:
    Strategy *_stg;
};

#endif //ACTIONDESIGNMODEL_CONTEXT_H
