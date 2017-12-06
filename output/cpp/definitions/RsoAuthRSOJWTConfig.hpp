#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthRSOJWTConfig_t {
    std::optional<std::string> token;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthRSOJWTConfig_t& v) {
    if(v.token)
      j["token"] = *v.token;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthRSOJWTConfig_t& v) {
    if(auto it = j.find("token"); it != j.end() !it->is_null())
      v.token = it->get<std::string>();
  }
}
