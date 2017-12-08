#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashRMSMessage_t {
    int64_t_t timestamp;
    std::string_t payload;
  };

  inline void to_json(nlohmann::json& j, const LolClashRMSMessage_t& v) {
    j["timestamp"] = v.timestamp;
    j["payload"] = v.payload;
  }

  inline void from_json(const nlohmann::json& j, LolClashRMSMessage_t& v) {
    v.timestamp = j.at("timestamp").get<int64_t_t>();
    v.payload = j.at("payload").get<std::string_t>();
  }
  inline std::string to_string(const LolClashRMSMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
