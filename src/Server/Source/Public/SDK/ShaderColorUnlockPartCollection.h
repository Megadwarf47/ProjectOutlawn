///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/ShaderCustomizationUnlockPartCollection.h>

namespace fb {
	class ColorReference;
	class ColorUnlockPartData;
}

namespace fb {
	class ShaderColorUnlockPartCollection : public ShaderCustomizationUnlockPartCollection {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ShaderColorUnlockPartCollection"); }
		virtual ~ShaderColorUnlockPartCollection() override {}
		ShaderColorUnlockPartCollection() {
		};

		CtrRef<ColorReference> m_defaultColorReference; // 0x28 (40)
		RefArray<ColorUnlockPartData> m_unlockParts; // 0x30 (48)
	}; // 0x38 (56)
}

