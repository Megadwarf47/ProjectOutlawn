///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/Vec4.h>

namespace fb {
	class ColorReference : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ColorReference"); }
		virtual ~ColorReference() override {}
		ColorReference() {
			m_color = Vec4(0.f, 0.f, 0.f, 1.f);
		};

		Vec4 m_color; // 0x20 (32)
	}; // 0x30 (48)
}

