///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/Asset.h>
#include <fb/String.h>

namespace fb {
	class AntProjectAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AntProjectAsset"); }
		virtual ~AntProjectAsset() override {}
		AntProjectAsset() {
			m_projectId = 0;
		};

		String m_antNativeProjectName; // 0x18 (24)
		AntRef m_sceneOp; // 0x20 (32)
		s32 m_projectId; // 0x34 (52)
	}; // 0x38 (56)
}

