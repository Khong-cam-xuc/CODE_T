import sublime, sublime_plugin, time
import datetime

def InsertDatetimeCommand():
    # def run(self, edit):
        # current_datetime = datetime.now()
        # formatted_datetime = current_datetime.strftime("%d.%m.%Y %H:%M:%S")
    g = f'''
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0">
<dict>
    <key>name</key>
    <string>Globals</string>
    <key>scope</key>
    <string></string>
    <key>settings</key>
    <dict>
        <key>shellVariables</key>
        <array>
            <dict>
                <key>name</key>
                <string>CURRENT_DATETIME</string>
                <key>value</key>
                <string><![CDATA[{time.strftime('%d.%m.%Y %I:%M:%S')}]]></string>
            </dict>
        </array>
    </dict>
</dict>
</plist>
    '''
    #<string><![CDATA[{time.strftime('%d.%m.%Y %I:%M:%S')}]]></string>
    f = open("C:/Users/khong/AppData/Roaming/Sublime Text/Packages/User/Default.tmPreferences","w")
    f.write(g)
    f.close()
    
class WindowFocusListener(sublime_plugin.EventListener):
    def on_activated(self, view):
          InsertDatetimeCommand()