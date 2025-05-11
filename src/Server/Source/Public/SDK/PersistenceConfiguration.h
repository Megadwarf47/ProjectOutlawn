///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>

namespace fb {
	class PlayerTypeProfile;
	class PointSystemParamsAsset;
	class XdpExportAsset;
}

namespace fb {
	class PersistenceConfiguration : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PersistenceConfiguration"); }
		virtual ~PersistenceConfiguration() override {}
		PersistenceConfiguration() {
		};

		CtrRef<PlayerTypeProfile> m_mpProfile; // 0x18 (24)
		CtrRef<PlayerTypeProfile> m_spProfile; // 0x20 (32)
		CtrRef<PlayerTypeProfile> m_coopProfile; // 0x28 (40)
		CtrRef<PointSystemParamsAsset> m_pointSystemParams; // 0x30 (48)
		CtrRef<XdpExportAsset> m_xdpExport; // 0x38 (56)
	}; // 0x40 (64)
}

