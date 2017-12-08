#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginLcdsResponse_t {
    nlohmann::json_t body;
    std::string_t typeName;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLcdsResponse_t& v) {
    j["body"] = v.body;
    j["typeName"] = v.typeName;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLcdsResponse_t& v) {
    v.body = j.at("body").get<nlohmann::json_t>();
    v.typeName = j.at("typeName").get<std::string_t>();
  }
  inline std::string to_string(const LolLoginLcdsResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
