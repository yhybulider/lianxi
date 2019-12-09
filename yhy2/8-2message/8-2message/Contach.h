namespace Contacter {
	using namespace System;
	public ref struct Contact
	{
	public:
		String^ contactName;                       // 姓名
		String^ contactNick;                         // 昵称
		Boolean contactSex;                        // 性别,男为true,女为false
		DateTime contactBirth;                       // 出生日期
		String^ contactPhone;                       // 联系电话
		String^ contactMobile;                       // 移动电话
		String^ contactEmail;                        // 电子邮件
		String^ contactAddress;                     // 联系地址
		String^ companyName;                      // 单位名称
		String^ companyPhone;                     // 单位电话
		String^ companyPost;                         // 邮编
		String^ companyAddress;                    // 单位地址
	};
}