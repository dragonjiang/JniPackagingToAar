package com.dj.jni.packagingtoaar;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.widget.TextView;

import com.dj.jni.jnimodule.NativeHelper;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        NativeHelper nativeHelper = new NativeHelper();
        TextView textView = (TextView) findViewById(R.id.text_view);
        textView.setText(nativeHelper.getStringFromJni());
    }
}
