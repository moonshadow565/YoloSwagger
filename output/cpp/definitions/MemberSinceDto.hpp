#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerInfoDto.hpp"
namespace leagueapi {
  struct MemberSinceDto_t {
    PlayerInfoDto_t playerInfo;
    int64_t since;
    std::string role;
  };

  inline void to_json(nlohmann::json& j, const MemberSinceDto_t& v) {
    j["playerInfo"] = v.playerInfo;
    j["since"] = v.since;
    j["role"] = v.role;
  }

  inline void from_json(const nlohmann::json& j, MemberSinceDto_t& v) {
    v.playerInfo = j.at("playerInfo").get<PlayerInfoDto_t>();
    v.since = j.at("since").get<int64_t>();
    v.role = j.at("role").get<std::string>();
  }
  inline std::string to_string(const MemberSinceDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
