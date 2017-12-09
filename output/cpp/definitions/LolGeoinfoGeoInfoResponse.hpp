#pragma once
#include <json.hpp>
#include <optional>
#include "LolGeoinfoGeoInfo.hpp"
namespace leagueapi {
  struct LolGeoinfoGeoInfoResponse_t {
    std::string errorMessage;
    bool isLatest;
    bool success;
    LolGeoinfoGeoInfo_t geoInfo;
  };

  inline void to_json(nlohmann::json& j, const LolGeoinfoGeoInfoResponse_t& v) {
    j["errorMessage"] = v.errorMessage;
    j["isLatest"] = v.isLatest;
    j["success"] = v.success;
    j["geoInfo"] = v.geoInfo;
  }

  inline void from_json(const nlohmann::json& j, LolGeoinfoGeoInfoResponse_t& v) {
    v.errorMessage = j.at("errorMessage").get<std::string>();
    v.isLatest = j.at("isLatest").get<bool>();
    v.success = j.at("success").get<bool>();
    v.geoInfo = j.at("geoInfo").get<LolGeoinfoGeoInfo_t>();
  }
  inline std::string to_string(const LolGeoinfoGeoInfoResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
