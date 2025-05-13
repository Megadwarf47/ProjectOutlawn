///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>

namespace fb {
	class AntEnumeration;
}

namespace fb {
	class AnimationSpawnTemplate : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AnimationSpawnTemplate"); }
		virtual ~AnimationSpawnTemplate() override {}
		AnimationSpawnTemplate() {
		};

		CtrRef<AntEnumeration> m_runStyle; // 0x10 (16)
	}; // 0x18 (24)
}

