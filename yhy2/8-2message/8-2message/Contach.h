namespace Contacter {
	using namespace System;
	public ref struct Contact
	{
	public:
		String^ contactName;                       // ����
		String^ contactNick;                         // �ǳ�
		Boolean contactSex;                        // �Ա�,��Ϊtrue,ŮΪfalse
		DateTime contactBirth;                       // ��������
		String^ contactPhone;                       // ��ϵ�绰
		String^ contactMobile;                       // �ƶ��绰
		String^ contactEmail;                        // �����ʼ�
		String^ contactAddress;                     // ��ϵ��ַ
		String^ companyName;                      // ��λ����
		String^ companyPhone;                     // ��λ�绰
		String^ companyPost;                         // �ʱ�
		String^ companyAddress;                    // ��λ��ַ
	};
}