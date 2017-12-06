using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolSettingsSettingCategory
    {
        [DataMember(Name = "data")]
        dynamic Data { get; set; }

        [DataMember(Name = "schemaVersion")]
        int SchemaVersion { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSettingsSettingCategory {\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("  SchemaVersion: ").Append(SchemaVersion).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}