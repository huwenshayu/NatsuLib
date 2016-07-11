#pragma once
#include "natType.h"
#include <Windows.h>
#include <vector>
#include "natStringUtil.h"

namespace NatsuLib
{
	namespace natUtil
	{
		enum : nuInt
		{
			DefaultCodePage = CP_INSTALLED,
		};

		///	@brief	string转wstring
		inline std::wstring C2Wstr(std::string const& str)
		{
			return std::wstring(str.begin(), str.end());
		}
		///	@brief	wstring转string
		inline std::string W2Cstr(std::wstring const& str)
		{
			return std::string(str.begin(), str.end());
		}

		///	@brief	多字节转Unicode
		std::wstring MultibyteToUnicode(ncStr Str, nuInt CodePage = DefaultCodePage);
		///	@brief	宽字符转多字节
		std::string WidecharToMultibyte(ncWStr Str, nuInt CodePage = DefaultCodePage);

		///	@brief	获得资源字符串
		///	@param[in]	ResourceID	资源ID
		///	@param[in]	hInstance	实例句柄，默认为NULL
		nTString GetResourceString(DWORD ResourceID, HINSTANCE hInstance = NULL);

		///	@brief	获得资源数据
		///	@param[in]	ResourceID	资源ID
		///	@param[in]	lpType		资源类型
		///	@param[in]	hInstance	实例句柄，默认为NULL
		std::vector<nByte> GetResourceData(DWORD ResourceID, ncTStr lpType, HINSTANCE hInstance = NULL);
	}
}
