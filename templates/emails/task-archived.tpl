<p>
    {{#USER_HAS_NAME}}
        {{USERNAME}},
    {{/USER_HAS_NAME}}
    {{#NO_USER_NAME}}
        Hello,
    {{/NO_USER_NAME}}
</p>

<p>
    A task that you are following on the {{SITE_NAME}} translation platform has changed
    its status. The task "{{TASK_TITLE}}" has been archived by {{ORG_NAME}}. This means 
    that the task is now complete and has been removed from the system.
</p>

<p>
    From,<br />
    The {{SITE_NAME}} Team
</p>


{{>FOOTER}}
