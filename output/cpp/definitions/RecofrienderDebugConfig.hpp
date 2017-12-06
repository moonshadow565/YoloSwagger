#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderDebugConfig_t {
    std::optional<bool> isHttpLoggingEnabled;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderDebugConfig_t& v) {
    if(v.isHttpLoggingEnabled)
      j["isHttpLoggingEnabled"] = *v.isHttpLoggingEnabled;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderDebugConfig_t& v) {
    if(auto it = j.find("isHttpLoggingEnabled"); it != j.end() !it->is_null())
      v.isHttpLoggingEnabled = it->get<bool>();
  }
}
